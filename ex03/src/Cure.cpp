#include "../inc/Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(Cure const& obj)
{
	_type = obj.getType();
}

Cure::~Cure()
{

}

Cure& Cure::operator=(Cure const& obj)
{
	if (this != &obj)
		_type = obj.getType();
	return *this;
}

Cure* Cure::clone() const
{
	Cure *newCure = new Cure(*this);
	return newCure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}