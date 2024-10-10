#include "../inc/Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	std::cout << "Dog is construct." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is destruct." << std::endl;
}

Dog::Dog(Dog& obj)
{
	*this = obj;
	std::cout << "Dog is construct." << std::endl;
}

Dog&	Dog::operator=(Dog const& obj)
{
	this->_type = obj._type;
	return *this;
} 

void Dog::makeSound()const
{
	std::cout << "Woof Woof!" << std::endl;
}