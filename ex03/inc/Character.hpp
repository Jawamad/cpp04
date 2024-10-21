#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria *_bag[4];
		std::string _name;
		AMateria *_onFloor;
	public:
		Character();
		Character(Character const& obj);
		Character(std::string nm);
		~Character();
		Character& operator=(Character const& obj);

		void setName(std::string nm);
		std::string const& getName()const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif