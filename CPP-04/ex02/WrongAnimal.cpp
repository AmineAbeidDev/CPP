#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "WrongAnimal Default constructor has been called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.getType();
	return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "[WRONG generic animal sound]" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}