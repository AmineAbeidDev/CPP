#include "Zombie.hpp"

int main ()
{
    Zombie *test1;
    Zombie test2;

   test1 = test2.zombieHorde(3, "TESTS");

    for (int i = 0; i < 3; ++i)
        test1[i].announce();
    delete [] test1;
}
