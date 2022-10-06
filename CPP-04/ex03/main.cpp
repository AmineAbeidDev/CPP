#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void fun()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		//// tmp = src->createMateria("ice");
		//// me->equip(tmp);
		//// tmp = src->createMateria("cure");
		//// me->equip(tmp);
		//// tmp = src->createMateria("ice");
		//// me->equip(tmp);
		//// tmp = src->createMateria("cure");
		//// me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		//// me->use(2, *bob);
		//// me->use(3, *bob);
		//// me->use(4, *bob);
		//// me->use(5, *bob);
		me->unequip(0);
		me->unequip(1);
		//// me->unequip(2);
		//// me->unequip(3);
		//// me->unequip(4);
		//// me->unequip(5);
		delete bob;
		delete me;
		delete src;
	}
}

int main()
{
	fun();
	//system("leaks interface");
	return 0;
}
