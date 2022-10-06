#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constrcutor has been called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << "DiamondTrap constrcutor has been called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destruction has been called" << std::endl;
}

std::string		DiamondTrap::getName()
{
    return (this->name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who Am I: "<< this->name << " " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "DTRAP " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
		if (this->hitPoints < 0)
			this->hitPoints = 0;
    }
    else
        std::cout << "You don't have enough hit/energy points" << std::endl;
}