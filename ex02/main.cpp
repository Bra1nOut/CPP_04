#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	std::cout << "// ------ TEST 1 ------ \\\\" << std::endl;
	std::cout << std::endl;
	const Animal* a = new Dog();
	const Animal* b = new Cat();
	// const Animal* c = new Animal(); // NOT POSSIBLE (That's why its in comment). Here just to show it
	std::cout << std::endl;
	delete a; delete b;

	std::cout << std::endl;
	std::cout << "// ------ TEST 2 ------ \\\\" << std::endl;
	std::cout << std::endl;

	const int size = 6;
	Animal* animals[size];

	// Creating 3 dogs
	for (int i = 0; i < size / 2; i++){
		std::cout << "New Dog nº" << i << std::endl;
		animals[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "// ------------ \\\\" << std::endl;
	std::cout << std::endl;

	//Creating 3 cats
	for (int i = size / 2; i < size; i++){
		std::cout << "New Cat nº" << i << std::endl;
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "// ------------ \\\\" << std::endl;
	std::cout << std::endl;

	// Deleting every animals
	for (int i = 0; i < size; i++){
		std::cout << "Delete animal nº" << i << std::endl;
		delete animals[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "// ------ TEST 3 ------ \\\\" << std::endl;
	std::cout << std::endl;

	Dog* Lino = new Dog();
	Dog* Phoebee = new Dog();

	std::cout << std::endl;
	std::cout << "Lino's brain" << std::endl;
	Lino->getBrain();
	std::cout << std::endl;
	std::cout << "Phoebee's brain" << std::endl;
	Phoebee->getBrain();
	std::cout << std::endl;

	std::cout << "Changing Lino's ideas" << std::endl;
	for (int i = 0; i < 50; i++)
		Lino->setBrain(i, "BALL");
	std::cout << std::endl;
	std::cout << "Checking Lino's ideas :" << std::endl;
	Lino->getBrain();

	std::cout << std::endl;
	std::cout << "Changing Phoebee's ideas" << std::endl;
	for (int i = 0; i < 50; i++)
		Phoebee->setBrain(i, "CUDDLE");
	std::cout << std::endl;
	std::cout << "Checking Phoebee's ideas :" << std::endl;
	Phoebee->getBrain();
	std::cout << std::endl;

	delete Lino; delete Phoebee;
	return 0;
}
