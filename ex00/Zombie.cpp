#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	std::cout << "Constructor Called" << std::endl;
	this->name = name;
	Zombie::announce();
}

Zombie::~Zombie() {
	std::cout << "Destructor Called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
