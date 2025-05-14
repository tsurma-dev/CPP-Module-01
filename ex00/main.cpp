#include "Zombie.hpp"

int main(void) {
	Zombie *allocated;

	randomChump("randomChump");
	allocated = newZombie("NewZombie");
	delete(allocated);
}
