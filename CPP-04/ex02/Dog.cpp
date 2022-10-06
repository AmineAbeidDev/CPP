#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor has been called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor has been called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &obj)
{
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.getType();
	delete (this->brain);
	this->brain = NULL;
	this->brain = new Brain(*obj.brain);
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Arf! Arf! (•ˋ _ ˊ•)" << std::endl;
}
