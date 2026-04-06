#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {
}

Ice::Ice(const Ice &copy) {
	*this = copy;
}

Ice& Ice::operator=(const Ice &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

