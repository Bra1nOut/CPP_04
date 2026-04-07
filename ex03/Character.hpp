#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string	_Name;
	AMateria*	_Inventory[4];
	AMateria*	_Stock[10];
	int			_StockIndex;
public:
	Character();
	Character(std::string name);
	~Character();
	Character(const Character& copy);
	Character& operator=(const Character& other);

	std::string const& getName() const;

	void equip(AMateria *m);
	void unequip(int i);
	void use(int i, ICharacter& target);
};
