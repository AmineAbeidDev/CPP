#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base	*ptr;
	Base	*a;

	srand(time(NULL));

	switch(rand() % 3)
	{
		case 0:
			a = new A;
			break ;
		case 1:
			a = new B;
			break ;
		case 2:
			a = new C;
			break ;
	}
	ptr = dynamic_cast<Base *>(a);
	return (ptr);
}

void identify(Base* p)
{
	if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C ptr" << std::endl;
	if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A ptr" << std::endl;
	if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B ptr" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<C&>(p);
        std::cout << "C ref" << std::endl;
		return ;
	}
	catch (...)
	{}
	try
	{
		(void)dynamic_cast<A&>(p);
        std::cout << "A ref" << std::endl;
		return ;
	}
	catch (...)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
        std::cout << "B ref" << std::endl;
	}
	catch (...)
	{}
}
