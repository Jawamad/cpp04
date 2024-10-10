#include "../inc/Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal is construct." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal is destruct." << std::endl;
}


Animal::Animal(Animal& obj)
{
	*this = obj;
	std::cout << "Animal is construct." << std::endl;
}

Animal&	Animal::operator=(Animal const& obj)
{
	this->_type = obj._type;
	return *this;
}

void Animal::makeSound()const
{
	std::cout << "You hear something." << std::endl;
}

void Animal::setType(std::string str)
{
	_type = str;
}

std::string Animal::getType() const
{
	return _type;
}