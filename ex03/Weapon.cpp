#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	std::cout << "Default constructor called" << std::endl;
	this->type = type;
}

Weapon::~Weapon() {
	std::cout << "Destructor called" << std::endl;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string Weapon::getType(void) {
	return (this->type);
}
