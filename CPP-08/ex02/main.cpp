#include "MutantStack.h"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17); //? add 5 then 17
	std::cout << mstack.top() << std::endl; //? print 17
	mstack.pop(); //? remove 17
	std::cout << mstack.size() << std::endl; //? should print 1
	mstack.push(3); //? now stack looks like 17, 1, 0, 737, 5, 3, 5 
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

//!*****************************************************//!

// #include <list>
// int main(void)
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::list<int> s(mstack);
// 	return 0;
// }

//!*****************************************************//!

// int main (void)
// {
// 	MutantStack<std::string> stack;

// 	stack.push("Test Number 1");
// 	stack.push("Test Number 2");
// 	stack.push("Test Number 3");

// 	MutantStack<std::string>::iterator beg = stack.begin();
// 	MutantStack<std::string>::iterator end = stack.end() - 1;

// 	std::cout << *end << " || " << stack.top() << std::endl;
// 	stack.pop();
// 	std::cout << *end << " || " << stack.top() << std::endl;

// 	//?**************************//?

// 	std::cout << *beg << std::endl;
// 	*beg = "another test";
// 	std::cout << *beg << std::endl;
// 	return (0);
// }
