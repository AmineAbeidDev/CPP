#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor has been called" << std::endl;
    this->type = "Cat";
	//this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor has been called" << std::endl;
	//delete this->brain;
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.getType();
	delete (this->brain);
	this->brain = NULL;
	this->brain = new Brain(*obj.brain);
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow! (◔ᴥ◔)" << std::endl;
}
