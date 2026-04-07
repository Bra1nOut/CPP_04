#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
private:
	std::string _Type;
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice& copy);
	Ice& operator=(const Ice& other);

	AMateria* clone() const;
	void use(ICharacter& target);
};
