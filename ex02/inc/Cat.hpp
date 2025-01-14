#ifndef CAT_HPP
#	define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(Cat& obj);

		Cat&	operator=(Cat const& obj); 

		void makeSound()const;
};

#endif