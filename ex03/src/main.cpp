#include "../inc/IMateriaSource.hpp"
#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n///// OTHER TESTS /////" << std::endl;
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(2, *bob);
	me->unequip(2);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(2, *bob);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(3, *bob);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;


	delete bob;
	delete me;
	delete src;
	return 0;
}