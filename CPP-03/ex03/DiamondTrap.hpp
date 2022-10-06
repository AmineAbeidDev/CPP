#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap();
        ~DiamondTrap();

		void attack(const std::string& target);

		std::string getName(void);
        void whoAmI();
};
   // std::ostream& operator<<(std::ostream& out, const DiamondTrap& obj);

#endif