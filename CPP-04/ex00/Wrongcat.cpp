#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
	std::cout << "WrongAnimal Default constructor has been called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongAnimal Destructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WRONG cat meow meow" << std::endl;
}
