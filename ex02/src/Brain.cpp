#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is construct" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is destruct" << std::endl;
}

Brain::Brain(Brain& obj)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = obj._ideas[i];
	}
	std::cout << "Brain is construct" << std::endl;
}

Brain&	Brain::operator=(Brain const& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = obj._ideas[i];
		}
	}
	return *this;
}