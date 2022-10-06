#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <stack>

template <class T>

class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack()
		{
		}

		~MutantStack()
		{
		}
		
		iterator    begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator    end()
		{
			return (std::stack<T>::c.end());
		}
};

#endif
