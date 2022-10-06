#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor has been called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal destructor has been called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	return (*this);
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

void Animal::makeSound() const
{
    std::cout << "[Generic animal sound]" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
