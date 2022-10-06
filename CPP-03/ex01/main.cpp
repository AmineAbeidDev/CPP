#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap testDummy1("Taghyya_1");
    ScavTrap testDummy2("Taghyya_2");

	std::cout << "\n";
	testDummy1.attack(testDummy2.getName());
	testDummy2.takeDamage(testDummy1.getAttackDamage());
	std::cout << "\n";

	testDummy2.attack(testDummy1.getName());
	testDummy1.takeDamage(testDummy2.getAttackDamage());
	std::cout << "\n";

	testDummy2.attack(testDummy1.getName());
	testDummy1.takeDamage(testDummy2.getAttackDamage());
	std::cout << "\n";

	// testDummy2.attack(testDummy1.getName());
	// testDummy1.takeDamage(testDummy2.getAttackDamage());

	// testDummy2.attack(testDummy1.getName());
	// testDummy1.takeDamage(testDummy2.getAttackDamage());

	// testDummy2.attack(testDummy1.getName());
	// testDummy1.takeDamage(testDummy2.getAttackDamage());

	testDummy2.guardGate();
	std::cout << "\n";
    // testDummy3 = testDummy1;

    // for (int i = 0; i < 110; i++)
    // {
    //     testDummy1.attack("Taghyya_2");
    //     testDummy2.attack("Taghyya_1");
    //     testDummy1.beRepaired(10);
    //     testDummy2.beRepaired(10);
    //     testDummy1.takeDamage(10);
    //     testDummy2.takeDamage(10);
    // }
    return (0);
}
