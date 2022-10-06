#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template<typename T>
void easyfind(T &var, int n)
{
	std::sort(var.begin(), var.end());
	if (std::binary_search(var.begin(), var.end(), n) == true)
	{
		std::cout << "A match is found" << std::endl;
		return ;
	}
	try
	{
		throw (std::invalid_argument("No match has been found"));
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << "\n";
	}
}

#endif
