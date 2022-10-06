#ifndef CHARACTER_HPP
#define CHARACTER_HPP
//#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		AMateria *trash[25];
        AMateria *materia[4];
		std::string name;
	public:
		Character();
		~Character();
		Character(std::string name);
		Character(const Character &obj);
		Character &operator=(const Character &obj);
	
		std::string const &getName() const;
		void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
