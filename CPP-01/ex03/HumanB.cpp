#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << "HumanB constructor has been called" << std::endl;
    this->name = name;
}

void HumanB::setWeapon(Weapon &type)
{
    this->weaponPTR = &type;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weaponPTR->getType() << std::endl;
}
