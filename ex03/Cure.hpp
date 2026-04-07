#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
private:
	std::string _Type;
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& copy);
	Cure& operator=(const Cure& other);

	AMateria*  clone() const;
	void use(ICharacter& target);
};
