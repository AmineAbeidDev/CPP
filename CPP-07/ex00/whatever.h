#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void swap(T &arg0, T &arg1)
{
	T	tmp;

	tmp = arg0;
	arg0 = arg1;
	arg1 = tmp;
}

template<typename T>
T min(T arg0, T arg1)
{
	return ((arg0 >= arg1) ? arg1 : arg0);
}

template<typename T>
T max(T arg0, T arg1)
{
	return ((arg0 <= arg1) ? arg1 : arg0);
}

#endif