#ifndef ANIMAL_HPP
#	define ANIMAL_HPP

#include <iostream>
class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal& obj);

		Animal&	operator=(Animal const& obj); 

		virtual void makeSound()const;
		void setType(std::string str);
		std::string getType()const ;
};

#endif