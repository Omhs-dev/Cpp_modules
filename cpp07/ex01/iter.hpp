#ifndef ITER_HPP
#define ITER_HPP

#include <stdint.h>
#include <iostream>

template <typename T>
void printElement(T &element)
{
	std::cout << element << std::endl;
}

/* test function
template <typename T>
void plusOne(T &n)
{
	n += 1;
}
*/

template <typename T>
void iter(T *address, int length, void(*f)(T&))
{
	if (length <= 0 || !f)
	{
		std::cout << "Error: invalid size or function ! !" << std::endl;
		return ;
	}
	for (int i = 0; i < length; i++)
	{
		f(address[i]);
	}
}

#endif