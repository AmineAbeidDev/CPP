#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string const &Weapon::getType()
{
    return (this->type);
}

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon constructor has been called" << std::endl;
    setType(type);
}

Weapon::Weapon()
{
    std::cout << "Weapon Default constructor has been called" << std::endl;
}

Weapon::Weapon(const Weapon &obj)
{
	std::cout << "COPY CONSTRUCTOR HAS BEEN CALLED" << std::endl;
	this->type = obj.type;
}
Weapon &Weapon::operator=(const Weapon &obj)
{
	std::cout << "COPY ASSIGNMENT OPERATOR HAS BEEN CALLED" << std::endl;
	this->type = obj.type;
	return (*this);
}