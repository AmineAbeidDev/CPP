#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        std::string const &getType();
        void		setType(std::string type);
       Weapon();
	   Weapon(const Weapon &obj);
	   Weapon &operator=(const Weapon &obj);
       Weapon(std::string type);
};

#endif
