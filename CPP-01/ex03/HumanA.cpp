#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << this->weaponREF.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : weaponREF(weapon)
{
    //std::cout << "HumanA constructor has been called" << std::endl;
    this->name = name;
}
