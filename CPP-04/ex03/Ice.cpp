#include "Ice.hpp"

Ice::Ice()
{
	//std::cout << "Ice default constructor has been called" << std::endl;
    this->type = "ice";
}

Ice::~Ice()
{
	//std::cout << "Ice destructor has been called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
	this->type = obj.type;
	return (*this);
}

Ice::Ice(const Ice &obj)
{
	*this = obj;
}

AMateria *Ice::clone() const
{
    AMateria *newIce = new Ice();
    return (newIce);
}
