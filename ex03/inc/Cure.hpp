#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria 
{
	public:
		Cure();
		Cure(Cure const& obj);
		~Cure();
		Cure& operator=(Cure const& obj);

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif