#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal is construct." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is destruct." << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
	*this = obj;
	std::cout << "WrongAnimal is construct." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& obj)
{
	this->_type = obj._type;
	return *this;
}

void WrongAnimal::makeSound()const
{
	std::cout << "You hear something." << std::endl;
}

void WrongAnimal::setType(std::string str)
{
	_type = str;
}

std::string WrongAnimal::getType() const
{
	return _type;
}