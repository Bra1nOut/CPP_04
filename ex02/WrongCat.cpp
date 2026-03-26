#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "WRONG MEOW" << std::endl;
}
