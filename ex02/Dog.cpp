#include "Dog.hpp"

Dog::Dog() : Animal() {
	// Brain *brain = new Brain();

	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog &other) {
	if (this != &other) {
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}

void Dog::getBrain(){
	for (int i = 0; i < 100; i++)
		std::cout << "Idea nº"<< i << " : " << this->brain->getIdea(i) << std::endl;
}

void Dog::setBrain(int index, std::string str){
	this->brain->setIdea(index, str);
}
