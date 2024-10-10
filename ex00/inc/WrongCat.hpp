#ifndef WRONGCAT_HPP
#	define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat& obj);

		WrongCat&	operator=(WrongCat const& obj); 

		void makeSound()const;
};

#endif