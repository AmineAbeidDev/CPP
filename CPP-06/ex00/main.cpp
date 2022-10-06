#include "Caster.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		Caster::typeCaster(std::string (av[1]));
    return 0;
}
