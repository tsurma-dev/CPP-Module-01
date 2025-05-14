#include "Zombie.hpp"

int main(void) {
	Zombie *horde = zombieHorde(5, "horde");
	Zombie *flood = zombieHorde(5, "flood");
	for (int i = 0; i < 5; ++i) { horde[i].announce(); }
	for (int i = 0; i < 5; ++i) { flood[i].announce(); }
	delete[] horde;
	delete[] flood;
	return (0);
}
