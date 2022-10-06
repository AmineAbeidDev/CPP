#include "Zombie.hpp"

void    Zombie::announce (void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
    std::cout << "Default constructor has been called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor has been called" << std::endl;
}