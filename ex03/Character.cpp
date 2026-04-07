#include "Character.hpp"

Character::Character() : _Name("default"), _StockIndex(0) {
	for (int i = 0; i < 4; ++i)
		_Inventory[i] = NULL;
	for (int i = 0; i < 10; ++i)
		_Stock[i] = NULL;
}

Character::Character(std::string name) : _Name(name), _StockIndex(0) {
	for (int i = 0; i < 4; ++i)
		_Inventory[i] = NULL;
	for (int i = 0; i < 10; ++i)
		_Stock[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
	{
		if (_Inventory[i])
		{
			delete _Inventory[i];
			_Inventory[i] = NULL;
		}
	}
	for (int i = 0; i < _StockIndex; ++i)
	{
		if (_Stock[i])
		{
			delete _Stock[i];
			_Stock[i] = NULL;
		}
	}
}

Character::Character(const Character &copy) {
	for (int i = 0; i < 4; ++i)
	{
		if (copy._Inventory[i])
			_Inventory[i] = copy._Inventory[i]->clone();
		else
			_Inventory[i] = NULL;
	}
	for (int i = 0; i < 10; ++i)
		_Stock[i] = NULL;
}

Character& Character::operator=(const Character &other) {
	if (this != &other) {
		_Name = other._Name;
		for (int i = 0; i < 4; ++i)
		{
			if (_Inventory[i])
			{
				delete _Inventory[i];
				_Inventory[i] = NULL;
			}
			if (other._Inventory[i])
				_Inventory[i] = other._Inventory[i]->clone();
			else
				_Inventory[i] = NULL;
		}
		for (int i = 0; i < _StockIndex; ++i)
		{
			if (_Stock[i])
			{
				delete _Stock[i];
				_Stock[i] = NULL;
			}
		}
		_StockIndex = 0;
	}
	return *this;
}

std::string const &Character::getName() const{
	return _Name;
}

void Character::equip(AMateria *nMateria)
{
	if (!nMateria)
		return;
	for (int i = 0; i < 4; ++i)
	{
		if (!_Inventory[i])
		{
			_Inventory[i] = nMateria;
			return;
		}
	}
}

void Character::unequip(int i){
	if (i < 0 || i >= 4 || !_Inventory[i])
		return;
	if (_StockIndex < 10)
		_Stock[_StockIndex++] = _Inventory[i];
	_Inventory[i] = NULL;
}

void Character::use(int i, ICharacter& target){
	if (i < 0 || i >= 4 || !_Inventory[i])
		return;
	_Inventory[i]->use(target);
}
