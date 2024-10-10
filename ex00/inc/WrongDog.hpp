#ifndef WRONGDOG_HPP
#	define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		~WrongDog();
		WrongDog(WrongDog& obj);

		WrongDog&	operator=(WrongDog const& obj); 

		void makeSound()const;
};

#endif