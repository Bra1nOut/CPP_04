#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
}

Animal& Animal::operator=(const Animal &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

std::string Animal::getType() const{
	return type;
}
