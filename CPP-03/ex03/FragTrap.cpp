#include "FragTrap.hpp"

FragTrap::FragTrap(const FragTrap &obj)
{
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FargTrap destructor has been called" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "Default FargTrap constructor has been called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FargTrap constructor has been called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Let's make a hign five guys!!!" << std::endl;
}

 void FragTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "You don't have enough hit/energy points" << std::endl;
}
