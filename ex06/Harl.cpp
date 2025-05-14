#include "Harl.hpp"
#include <iostream>
#include <ostream>

Harl::Harl(/* args */) { std::cout << "Constructor called" << std::endl; }

Harl::~Harl() { std::cout << "Destructor called" << std::endl; }

void Harl::debug(void) {
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
      << std::endl;
}

void Harl::info(void) {
  std::clog
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << std::endl;
}

void Harl::warning(void) {
  std::clog
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month."
      << std::endl;
}

void Harl::error(void) {
  std::cerr << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}

void Harl::complain(std::string level) {
  int i = -1;
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  while (++i < 4)
    if (level == levels[i]) break;
  switch (i)
  case 0: {
    this->debug();
    case 1:
      this->info();
    case 2:
      this->warning();
    case 3:
      this->error();
	  break;
    default:
      std::cout << "Please enter valid level" << std::endl;
      break;
  }
}
