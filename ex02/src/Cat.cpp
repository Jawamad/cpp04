#include "../inc/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat is construct." << std::endl;
}

Cat::~Cat()
{
	delete(_brain);
	std::cout << "Cat is destruct." << std::endl;
}

Cat::Cat(Cat& obj)
{
	_type = obj._type;
	_brain = new Brain(*obj._brain);
	std::cout << "Cat is construct." << std::endl;
}

Cat&	Cat::operator=(Cat const& obj)
{
	if (this != &obj)
	{
		_type = obj._type;
		delete _brain;
		_brain = new Brain(*obj._brain);
	}
	return *this;
} 

void Cat::makeSound()const
{
	std::cout << "Meow Meow!" << std::endl;
}