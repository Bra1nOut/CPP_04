#pragma once
 
#include "AMateria.hpp"

class Ice : public AMateria {
private:
	
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice& copy);
	Ice& operator=(const Ice& other);

	AMateria* clone() const;
	void use(ICharacter& target);
};
