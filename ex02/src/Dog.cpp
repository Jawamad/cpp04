#include "../inc/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog is construct." << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog is destruct." << std::endl;
}

Dog::Dog(Dog& obj)
{
	_type = obj._type;
	_brain = new Brain(*obj._brain);
	std::cout << "Dog is construct." << std::endl;
}

Dog&	Dog::operator=(Dog const& obj)
{
	if (this != &obj)
	{
		_type = obj._type;
		delete _brain;
		_brain = new Brain(*obj._brain);
	}
	return *this;
} 

void Dog::makeSound()const
{
	std::cout << "Woof Woof!" << std::endl;
}