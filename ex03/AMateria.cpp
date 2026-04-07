#include "AMateria.hpp"

AMateria::AMateria() : _Type("") {}

AMateria::AMateria(std::string const & type) {
	_Type = type;
}

AMateria::AMateria(const AMateria &copy) : _Type(copy._Type) {}

AMateria& AMateria::operator=(const AMateria &other) {
	if (this != &other) {
		(void)other;
	}
	return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const {
	return _Type;
}

void AMateria::use(ICharacter& target){
	(void)target;
}
