#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor" << std::endl;
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	*this = copy;
}

Dog& Dog::operator=(const Dog &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
