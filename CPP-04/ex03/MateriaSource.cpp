#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    //std::cout << "MateriaSource defualt constructor has been called" << std::endl;
	for (int i = 0; i < 4; ++i)
		materiasBox[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    //std::cout << "MateriaSource destructor has been called" << std::endl;
	for (int i = 0; i < 4; ++i)
		if(this->materiasBox[i])
			delete this->materiasBox[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (i < 4 && this->materiasBox[i])
		i++;
	if (i != 4)
		this->materiasBox[i] = m;
	else
		delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
		if (materiasBox[i] && materiasBox[i]->getType() == type)
			return (materiasBox[i]->clone());
	return (0);
}
