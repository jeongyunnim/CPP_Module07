#pragma once
#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_
#include <iostream>
#include <exception>

template <typename T>
class Array
{
public:

	class OutOfRange : public std::exception
	{
		const char *what(void) const throw();
	};

	Array<T>(void);
	Array<T>(unsigned int n);
	~Array<T>(void);
	Array<T>& operator=(const Array<T>& obj);
	Array<T>& operator=(Array<T>& obj);
	T& operator[](int size);
	const T& operator[](int size) const;
	Array<T>(const Array<T>& obj);
	Array<T>(Array<T>& obj);


	int	size(void) const;

private:

	int		_size;
	T		*_arrPtr;

};

template <typename T>
const char *Array<T>::OutOfRange::what(void) const throw()
{
	return ("Out of range");
}

template <typename T>
Array<T>::Array(void)
	:	_size(0)
	,	_arrPtr(NULL)
{}

template <typename T>
Array<T>::Array(unsigned int n)
	:	_size(n)
{
	_arrPtr = new T[n];
}

template <typename T>
Array<T>::~Array(void)
{
	if (_arrPtr != NULL)
		delete[] _arrPtr;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	if (this == &obj)
		return *this;
	if (_arrPtr != NULL)
		delete[] _arrPtr;
	_size = obj._size;
	if (_size == 0)
		_arrPtr = NULL;
	else
	{
		_arrPtr = new T[_size];
		for (int i = 0; i < _size; i++)
			_arrPtr[i] = obj._arrPtr[i];
	}
	return (*this);
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T>& obj)
{
	if (this == &obj)
		return *this;
	if (_arrPtr != NULL)
		delete[] _arrPtr;
	_size = obj._size;
	if (_size == 0)
		_arrPtr = NULL;
	else
	{
		_arrPtr = new T[_size];
		for (int i = 0; i < _size; i++)
			_arrPtr[i] = obj._arrPtr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::Array(const Array<T>& obj)
	:	_size(0)
	,	_arrPtr(NULL)
{ 
	*this = obj;
}

template <typename T>
Array<T>::Array(Array<T>& obj)
	:	_size(0)
	,	_arrPtr(NULL)
{
	*this = obj;
}

template <typename T>
T& Array<T>::operator[](int size)
{
	if (size < 0 || size >= _size)
		throw (OutOfRange());
	else
		return (_arrPtr[size]);
}

template <typename T>
const T& Array<T>::operator[](int size) const
{
	if (size < 0 || size >= _size)
		throw (OutOfRange());
	else
		return (_arrPtr[size]);
}

#endif
