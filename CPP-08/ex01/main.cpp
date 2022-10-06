#include "Span.hpp"

int main (void)
{
	int vals_sum = /*1000*/5; //?
	Span obj(vals_sum);
	//Span n = Span(4);

	// int arr1[vals_sum];//?
	// srand(time(NULL));//?
	// for (int i = 0; i < vals_sum - 1; ++i)//?
	// 	arr1[i] = rand() % 214748364;//?

	// obj.addNumber(arr1, (arr1 + vals_sum));//?
	obj.addNumber(6);
	obj.addNumber(3);
	obj.addNumber(17);
	obj.addNumber(9);
	obj.addNumber(11);
	obj.addNumber(99);
	std::cout << "Longest span:\t" << obj.longestSpan() << std::endl;
	std::cout << "Shortest span:\t" << obj.shortestSpan() << std::endl;

	//system  ("leaks span");
	return (0);
}
