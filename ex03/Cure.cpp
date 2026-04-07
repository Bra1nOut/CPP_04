#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::~Cure() {
}

Cure::Cure(const Cure &copy) : AMateria(copy) {}

Cure& Cure::operator=(const Cure &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

