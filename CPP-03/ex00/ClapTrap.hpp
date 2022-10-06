#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
    public:
		//* CON/DECON STRUCTORS
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap (const ClapTrap &obj);
        ~ClapTrap(void);

		//* COPY ASSIGNMENT OPERATOR
        ClapTrap &operator=(const ClapTrap &obj);
	
		//* GETTERS
        std::string getName(void);
        int			getHitPoints(void);
        int			getEnergyPoints(void);
        int			getAttackDamage(void);

		//* METHODES
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
