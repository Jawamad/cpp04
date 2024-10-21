#include "../inc/Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(Ice const& obj)
{
	_type = obj.getType();
}

Ice::~Ice()
{

}

Ice& Ice::operator=(Ice const& obj)
{
	if (this != &obj)
		_type = obj.getType();
	return *this;
}

Ice* Ice::clone() const
{
	Ice *newIce = new Ice(*this);
	return newIce;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}