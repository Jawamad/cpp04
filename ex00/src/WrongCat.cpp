#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat is construct." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destruct." << std::endl;
}

WrongCat::WrongCat(WrongCat& obj)
{
	*this = obj;
	std::cout << "WrongCat is construct." << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& obj)
{
	this->_type = obj._type;
	return *this;
} 

void WrongCat::makeSound()const
{
	std::cout << "Meow Meow!" << std::endl;
}