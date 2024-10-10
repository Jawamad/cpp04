#ifndef WRONGANIMAL_HPP
#	define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal& obj);

		WrongAnimal&	operator=(WrongAnimal const& obj); 

		void makeSound()const;
		void setType(std::string str);
		std::string getType()const ;
};

#endif