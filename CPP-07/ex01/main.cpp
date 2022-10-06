#include "iter.h"

template<typename T>
int print(T var)
{
	std::cout << "VAL: " << *var << std::endl;
	return (1);
}

int main (void)
{
	int			arr1[4] = {0, 1 ,2 ,3};
	std::string arr2[4] = {"one", "two", "three", "four"};
	float		arr3[4] = {0.0f, 0.1f, 0.2f, 0.3f};
	
	iter(arr1, 4, print);
	iter(arr2, 4, print);
	iter(arr3, 4, print);
	return (0);
}
