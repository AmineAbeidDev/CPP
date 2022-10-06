#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor has been called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor has been called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow! (◔ᴥ◔)" << std::endl;
}
