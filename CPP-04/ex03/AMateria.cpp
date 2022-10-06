#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    //std::cout << "AMateria default constructor has been called" << std::endl;
}

AMateria::~AMateria()
{
    //std::cout << "AMateria destructor has been called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	this->type = obj.type;
	return (*this);
}

AMateria::AMateria(std::string const & type)
{
    //std::cout << "AMateria constructor has been called" << std::endl;
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
	if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "[this materia is unknown]" << std::endl;
}
