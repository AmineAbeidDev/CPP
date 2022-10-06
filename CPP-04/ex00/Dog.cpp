#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor has been called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor has been called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.getType();
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Arf! Arf! (•ˋ _ ˊ•)" << std::endl;
}
