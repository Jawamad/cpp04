#ifndef DOG_HPP
#	define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(Dog& obj);

		Dog&	operator=(Dog const& obj); 

		void makeSound()const;
};

#endif