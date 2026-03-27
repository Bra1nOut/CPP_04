#pragma once

#include "Dog.hpp"

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& other);
	void makeSound() const;
	std::string getType() const;
};
