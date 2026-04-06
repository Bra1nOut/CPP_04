#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	AMateria* _Inventory[4];
	AMateria* _Stock[10];
	std::string _Name;
public:
	Character();
	~Character();
	Character(const Character& copy);
	Character& operator=(const Character& other);
};
