#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap testDummy1("Taghyya_1");
    ClapTrap testDummy2("Taghyya_2");
	ClapTrap testDummy1_copy(testDummy1);
	ClapTrap testDummy2_copy;
	
	testDummy2_copy = testDummy2;

    testDummy2.attack(testDummy1.getName());
	testDummy1.takeDamage(testDummy2.getAttackDamage());
    testDummy2.beRepaired(10);

    return (0);
}
