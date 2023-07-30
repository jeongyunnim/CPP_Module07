#pragma once
#ifndef _WHATEVER_HPP_
#define _WHATEVER_HPP_

template <typename T>
void    swap(T& t1, T& t2)
{
	T temp = t1;

	t1 = t2;
	t2 = temp;
}

template <typename T>
const T&    min(T& t1,T& t2)
{
	if (t1 < t2)
		return (t1);
	else
		return (t2);
}

template <typename T>
const T&    min(const T& t1,const T& t2)
{
	if (t1 < t2)
		return (t1);
	else
		return (t2);
}

template <typename T>
const T&    max(T& t1,T& t2)
{
	if (t1 > t2)
		return (t1);
	else
		return (t2);
}

template <typename T>
const T&    max(const T& t1,const T& t2)
{
	if (t1 > t2)
		return (t1);
	else
		return (t2);
}

#endif
