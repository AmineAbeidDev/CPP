#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Irp.h"

int main (void)
{
	Base	*ptr1;
	Base	*ptr2 = new A();
	Base	*ptr3 = new C();

	ptr1 = generate();

	identify(ptr2);
	identify(ptr3);
	identify(ptr1);
	std::cout << std::endl;
	identify(*ptr2);
	identify(*ptr3);
	identify(*ptr1);
	return (0);
}
