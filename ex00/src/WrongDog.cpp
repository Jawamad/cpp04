#include "../inc/WrongDog.hpp"

WrongDog::WrongDog()
{
	_type = "WrongDog";
	std::cout << "WrongDog is construct." << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog is destruct." << std::endl;
}

WrongDog::WrongDog(WrongDog& obj)
{
	*this = obj;
	std::cout << "WrongDog is construct." << std::endl;
}

WrongDog&	WrongDog::operator=(WrongDog const& obj)
{
	this->_type = obj._type;
	return *this;
} 

void WrongDog::makeSound()const
{
	std::cout << "Woof Woof!" << std::endl;
}