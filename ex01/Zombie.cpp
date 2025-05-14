#include "Zombie.hpp"

Zombie::Zombie() {	std::cout << "Constructor Called" << std::endl; }

Zombie::~Zombie() {	std::cout << "Destructor Called" << std::endl; }

void Zombie::SetName(std::string name) { this->name = name; }

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
