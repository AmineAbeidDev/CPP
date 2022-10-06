#include <string>
#include <iostream>

void    megaphone(char **av, int ac)
{
    for (int i = 1; i < ac; ++i)
        for (int j = 0; av[i][j]; ++j)
            std::cout << (char)std::toupper(av[i][j]);
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    if (ac > 1)
        megaphone(av, ac);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}