#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &copy) : Animal(copy){
	*this = copy;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other) {
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
