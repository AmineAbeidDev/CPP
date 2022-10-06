#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB {
		Weapon      *weaponPTR;
		std::string name;
	public:
		void attack();
        void setWeapon(Weapon &type);

		HumanB(std::string name);
};

#endif
