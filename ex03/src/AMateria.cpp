#include "../inc/AMateria.hpp"

AMateria::AMateria()
{

}
AMateria::AMateria(std::string const& type)
{
	_type = type;
}

AMateria::AMateria(AMateria const& obj)
{
	_type = obj.getType();
}

AMateria::~AMateria()
{

}

AMateria& AMateria::operator=(AMateria const& obj)
{
	if (this != &obj)
	 	_type = obj.getType();
	return *this;
}

std::string const& AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Cannot target " << target.getName() << "the AMetaria is not design to be use.";
}