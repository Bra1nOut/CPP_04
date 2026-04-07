#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name){
	_Name = name;
}

Character::~Character() {
}

Character::Character(const Character &copy) {
	*this = copy;
}

Character& Character::operator=(const Character &other) {
	if (this != &other) {

	}
	return *this;
}

