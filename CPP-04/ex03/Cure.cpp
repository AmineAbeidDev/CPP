#include "Cure.hpp"

Cure::Cure()
{
	//std::cout << "Cure default constructor has been called" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
	//std::cout << "Cure default constructor has been called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
	this->type = obj.type;
	return (*this);
}

Cure::Cure(const Cure &obj)
{
	*this = obj;
}

AMateria *Cure::clone() const
{
   AMateria *newCure = new Cure();
    return (newCure);
}
