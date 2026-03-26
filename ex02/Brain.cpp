#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = "FOOD";
	}
}

Brain::~Brain() {
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain& Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++){
			this->_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdea(int index){
	return this->_ideas[index];
}

void Brain::setIdea(int index, std::string str){
	this->_ideas[index] = str;
}
