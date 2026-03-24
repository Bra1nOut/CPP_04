#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
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
