#include "Zombie.hpp"

int main (void)
{
    Zombie test1;
    Zombie *test2;

    test2 = test1.newZombie("TEST");
    test2->announce();
    test1.randomChump("Bruh");
    delete test2;
    return (0);
}
