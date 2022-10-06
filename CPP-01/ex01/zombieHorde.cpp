#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].name = name + "_" + (char)(i + 1 + '0');
    return (zombies);
}
