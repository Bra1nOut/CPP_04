#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor" << std::endl;
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy){
	*this = copy;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
