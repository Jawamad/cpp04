
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"


int main()
{
	std::cout << "------ANIMAL TEST------" << std::endl << std::endl;
	std::cout << std::endl;
	//Animal *robert = new Animal();
	std::cout << std::endl;
	Animal* zoo[10];
	for (int i = 0; i < 5; i++)
	{
		zoo[i] = new Dog();
		zoo[i + 5] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		zoo[i]->makeSound();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete zoo[i];
	return 0;
}