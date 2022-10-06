#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap testDummy1("Taghyya_1");
    ScavTrap testDummy2("Taghyya_2");
	FragTrap testDummy3("Taghyya_3");

	std::cout << "\n";
	testDummy3.highFivesGuys();
	testDummy2.guardGate();

	// std::cout << "\n";
	// for (int i = 0; i < 5; ++i)
	// {
	// 	testDummy3.attack(testDummy2.getName());
	// 	testDummy2.takeDamage(testDummy3.getAttackDamage());
	// 	testDummy2.beRepaired(5);
	// 	std::cout << "\n";
	// }
	// std::cout << "\n";
	
	std::cout << "\n";
    testDummy1.attack(testDummy2.getName());
	testDummy2.takeDamage(testDummy1.getAttackDamage());
	std::cout << "\n";

    testDummy2.attack(testDummy3.getName());
	testDummy3.takeDamage(testDummy2.getAttackDamage());
	std::cout << "\n";

    testDummy3.attack(testDummy1.getName());
	testDummy1.takeDamage(testDummy3.getAttackDamage());
	std::cout << "\n";

	testDummy1.beRepaired(10);
	testDummy2.beRepaired(20);
	testDummy3.beRepaired(30);
	std::cout << "\n";

    // testDummy1.takeDamage(900);
    // testDummy2.takeDamage(900);
    // testDummy3.takeDamage(900);

    // testDummy1.beRepaired(100);
    // testDummy2.beRepaired(100);
    // testDummy3.beRepaired(100);

    // testDummy1.takeDamage(900);
    // testDummy2.takeDamage(900);
    // testDummy3.takeDamage(900);
    return (0);
}
