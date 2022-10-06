#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor has been called" << std::endl;
	hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0)
    {
        std::cout << name << " have lost " << amount << " hitPoints" << std::endl;
        hitPoints -= amount;
    }
    else
        std::cout << this->name << " Chocking on his blood" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0)
    {
        std::cout << name << " have gained " << amount << " hitPoints and lost one energy point" << std::endl;
        hitPoints += amount;
        energyPoints--;
    }
    else
        std::cout << "You don't have enough energy points" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
		if (this->hitPoints < 0)
			this->hitPoints = 0;
    }
    else
        std::cout << "You don't have enough hit/energy points" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor has been called " << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    this->attackDamage = obj.attackDamage;
    this->energyPoints = obj.energyPoints;
    this->hitPoints = obj.hitPoints;
    this->name = obj.name;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

int         ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}

int         ClapTrap::getEnergyPoints()
{
    return (this->energyPoints);
}

int         ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}

void        ClapTrap::setName(std::string name)
{
    this->name = name;
}

void        ClapTrap::setHitPoints(int hitPs)
{
    this->hitPoints = hitPs;
}

void        ClapTrap::setEnergyPoints(int energyPs)
{
    this->energyPoints = energyPs;
}
void        ClapTrap::setAttackDamage(int attackDmg)
{
    this->attackDamage = attackDmg;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor has been called" << std::endl;
}
