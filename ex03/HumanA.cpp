#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon) : name(_name) , weapon(weapon)
{
	std::cout << "Default constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "Destructor called" << std::endl;
}

void HumanA::attack(){
	std::cout << this->name << " attacks with their weapon " << this->weapon.getType() << std::endl;
}

