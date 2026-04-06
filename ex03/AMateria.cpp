#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) {
	_Type = type;
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria &other) {
	if (this != &other) {
		(void)other;
	}
	return *this;
}

std::string const& AMateria::getType() const {
	return _Type;
}

void AMateria::use(ICharacter& target){
	(void)target;
}
