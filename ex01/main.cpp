#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "/// --- Constructing... --- \\\\\\" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *test = new WrongCat();
	std::cout << std::endl;

	std::cout << "/// --- Animal Type --- \\\\\\" <<std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << test->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "/// --- Animal Sound --- \\\\\\" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	test->makeSound();
	std::cout << std::endl;

	std::cout << "/// --- Destructing... --- \\\\\\" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete test;

	std::cout << std::endl;
	return 0;
}
