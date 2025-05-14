#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Only one argument please" << std::endl;
    return (0);
  }
  Harl harl;
  harl.complain(argv[1]);
  return (0);
}
