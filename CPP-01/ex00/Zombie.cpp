#include "Zombie.hpp"

void Zombie::announce(void)
{
   // Zombie *test;

    //test = test->newZombie("TEST1!");
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
    std::cout << "constructor has been called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed" << std::endl;
}
