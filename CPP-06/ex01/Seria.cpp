#include "Seria.hpp"

uintptr_t Seria::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Seria::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Seria::Seria()
{
	
}

Seria::~Seria()
{

}

Seria::Seria (const Seria &obj)
{
	*this = obj;
}

const Seria &Seria::operator=(const Seria &obj)
{
	return (obj);
}