#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	std::cout << "Default constructor called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "Destructor called" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack(){
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fists" << std::endl;
}

