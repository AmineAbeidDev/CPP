#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

class Span
{
private:
public:
	unsigned int		n;
	std::vector<int>	*ptr;
	Span();
	Span(unsigned int n);
	Span(const Span &obj);
	Span operator=(const Span &obj);
	~Span();

	int		longestSpan();
	int		shortestSpan();
	void	addNumber(int val);
	void	addNumber(int *beg, int *end);
};

#endif
