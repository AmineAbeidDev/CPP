#include "replacer.hpp"

int main (int ac, char **av)
{
    if (ac == 4)
        replacer(av[1], av[2], av[3]);
    return (0);
}