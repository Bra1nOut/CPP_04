#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_Inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++){
		if (_Inventory[i])
			delete _Inventory[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++)
	{
		if (copy._Inventory[i])
			_Inventory[i] = copy._Inventory[i]->clone();
		else
			_Inventory[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++){
			if (_Inventory[i])
				delete _Inventory[i];
			if (other._Inventory[i])
				_Inventory[i] = other._Inventory[i]->clone();
			else
				_Inventory[i] = NULL;
		}
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria* nMateria){
	if (!nMateria)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_Inventory[i]){
			_Inventory[i] = nMateria->clone();
			delete nMateria;
			return ;
		}
	}
	delete nMateria;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (_Inventory[i] && _Inventory[i]->getType() == type)
			return (_Inventory[i]->clone());
	}
	return NULL;
}
