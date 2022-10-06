#include "easyfind.h"

int main (void)
{
	int tst[] = {8, 9, 7, 6, 1};
	std::vector<int> vec(tst, tst + sizeof(tst)/sizeof(int));

	std::array<int, 5> arr = {-1, -4, -9, 5, -3};

	easyfind(vec, -6);
	easyfind(arr, 9);

	return (0);
}
