#include "Seria.hpp"

int main (void)
{
	Data		testObj;
	Seria		obj;
	uintptr_t	uinPtr;
	Data		*dPtr;

	//uinPtr = testObj;
	uinPtr = obj.serialize(&testObj);
	//dPtr = uinPtr;
	dPtr = obj.deserialize(uinPtr);

	std::cout << "Data ptr:\t" << &testObj << std::endl;
	std::cout << "deSeria ptr:\t" << dPtr << std::endl;

	return (0);
}