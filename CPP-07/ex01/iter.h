#ifndef ITER_H
#define ITER_H
#include <iostream>

template<typename T>
void iter(T &arr, int len, int func(T))
{
	for (int i = 0; i < len; ++i)
		func(&arr[i]);
}

#endif
