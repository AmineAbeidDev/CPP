#include "ClapTrap.hpp"

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " have lost " << amount << " hitPoints" << std::endl;
    hitPoints -= amount;
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
    }
    else
        std::cout << "You don't have enough hit/energy points" << std::endl;
    
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor has been called" << std::endl;
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment operator" << std::endl;
    this->attackDamage = obj.attackDamage;
    this->energyPoints = obj.energyPoints;
    this->hitPoints = obj.hitPoints;
    this->name = obj.name;
    return (*this);
}

int ClapTrap::getHitPoints(void)
{
    return (this->hitPoints);
}

std::string ClapTrap::getName(void)
{
    return (this->name);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage(void)
{
    return (this->attackDamage);
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor has been called" << std::endl;
	hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor" << std::endl;
	*this = copy;
}