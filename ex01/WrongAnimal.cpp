#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "WOIMP WOIMP" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
