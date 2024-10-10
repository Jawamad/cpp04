#include "../inc/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat is construct." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat is destruct." << std::endl;
}

Cat::Cat(Cat& obj)
{
	*this = obj;
	std::cout << "Cat is construct." << std::endl;
}

Cat&	Cat::operator=(Cat const& obj)
{
	this->_type = obj._type;
	return *this;
} 

void Cat::makeSound()const
{
	std::cout << "Meow Meow!" << std::endl;
}