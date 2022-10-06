#include "Span.hpp"

Span::Span(/* args */)
{
}

Span::Span(unsigned int n)
{
	this->n = n;
	this->ptr = new std::vector<int>();
}

Span::Span(const Span &obj)
{
	this->n = obj.n;
	this->ptr->insert(this->ptr->begin(), obj.ptr->begin(), obj.ptr->end());
}

Span Span::operator=(const Span &obj)
{
	this->n = obj.n;
	this->ptr->insert(this->ptr->begin(), obj.ptr->begin(), obj.ptr->end());
	return (*this);
}

Span::~Span()
{
	delete (this->ptr);
}

void Span::addNumber(int val)
{
	try
	{
		if (ptr->size() == n)
			throw (std::invalid_argument("Span is filled"));
		ptr->push_back(val);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Span::addNumber(int *beg, int *end)
{
	try
	{
		while (ptr->size() != n && beg <= end)
		{
			ptr->push_back(*beg);
			beg++;
		}
		if (ptr->size() == n)
			throw (std::invalid_argument("Span is filled"));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::longestSpan()
{
	try
	{
		if (this->ptr->size() <= 1)
				throw (std::bad_exception());
		std::sort(ptr->begin(), ptr->end());
		return (ptr->at(ptr->size() - 1) - ptr->at(0));
	}
	catch (...)
	{
		std::cout << "no span can be found" << std::endl;
	}
	return (-1);
}

int	Span::shortestSpan()
{
	int	ret = 0;

	try
	{
		if (this->ptr->size() <= 1)
			throw (std::bad_exception());
		std::sort(ptr->begin(), ptr->end());
		std::vector<int>::iterator beg = ptr->begin();
		std::vector<int>::iterator begSec = beg + 1;
		ret = *begSec - *beg;
		while (begSec != ptr->end())
		{
			if (ret > *begSec - *beg)
				ret = *begSec - *beg;
			begSec++;
			beg++;
		}
		return (ret);
	}
	catch(...)
	{
		std::cerr << "no span can be found" << std::endl;
	}
	return (-1);
}
