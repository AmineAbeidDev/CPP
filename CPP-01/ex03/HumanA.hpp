#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
       Weapon       &weaponREF;
        std::string name;
    public:
        void    attack();
       HumanA(std::string name, Weapon &weapon);
};

#endif
