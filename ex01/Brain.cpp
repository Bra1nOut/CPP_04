#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain& Brain::operator=(const Brain &other) {
	if (this != &other) {

	}
	return *this;
}

