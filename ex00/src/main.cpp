
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongDog.hpp"
#include "../inc/WrongCat.hpp"


int main()
{
	std::cout << "WRONG TEST" << std::endl << std::endl;
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* Wrongj = new WrongDog();
	const WrongAnimal* Wrongi = new WrongCat();
	std::cout <<std::endl;
	std::cout << Wrongj->getType() << " " << std::endl;
	Wrongj->makeSound();
	std::cout <<std::endl;
	std::cout << Wrongi->getType() << " " << std::endl;
	Wrongi->makeSound();
	std::cout <<std::endl;
	std::cout << Wrongmeta->getType() << " " << std::endl;
	Wrongmeta->makeSound();
	std::cout <<std::endl;
	delete(Wrongmeta);
	delete(Wrongi);
	delete(Wrongj);
	std::cout <<std::endl;
	std::cout << "ANIMAL TEST" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout <<std::endl;
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout <<std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout <<std::endl;
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout <<std::endl;
	delete(meta);
	delete(i);
	delete(j);
	
	return 0;
}