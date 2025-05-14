#include <iostream>

int main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Adress in ptr:\t" << stringPTR << "\n";
	std::cout << "Adress of ref:\t" << &stringREF << "\n";
	std::cout << "Value in ptr:\t" << *stringPTR << "\n";
	std::cout << "Value of ref:\t" << stringREF << std::endl;
	return (0);
}
