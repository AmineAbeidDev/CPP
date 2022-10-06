#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

Character::Character()
{
	//std::cout << "Character default constructor has been called" << std::endl;
	for (int i = 0; i < 4; ++i)
		this->materia[i] = NULL;
	for (int i = 0; i < 25; ++i)
		this->trash[i] = NULL;
}

Character::Character(std::string name)
{
	//std::cout << "Character constructor has been called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; ++i)
		this->materia[i] = NULL;
	for (int i = 0; i < 25; ++i)
		this->trash[i] = NULL;
}

Character::~Character()
{
	//std::cout << "Character destructor has been called" << std::endl;
	for (int i = 0; i < 4; ++i)
		if (this->materia[i])
			delete this->materia[i];
	int i = 0;
	while  (this->trash[i])
		delete this->trash[i++];
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->materia[idx])
		this->materia[idx]->AMateria::use(target);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4 && this->materia[i])
		i++;
	if (i != 4)
		this->materia[i] = m;
	else
		delete m;
	
}

void Character::unequip(int idx)
{
	int i = 0;
	if (idx < 4 && this->materia[idx])
	{
		while (this->trash[i])
			i++;
		this->trash[i] = this->materia[idx];
		this->materia[idx] = NULL;
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character &Character::operator=(const Character &obj)
{
	for (int i = 0; i < 4; ++i)
	{
		if (obj.materia[i] && obj.materia[i]->getType() == "ice")
		{
			if (this->materia[i])
				delete this->materia[i];
			this->materia[i] = new Ice();
		}
		if (obj.materia[i] && obj.materia[i]->getType() == "cure")
		{
			if (this->materia[i])
				delete this->materia[i];
			this->materia[i] = new Cure();
		}
	}
	this->name = obj.getName();
	return (*this);
}