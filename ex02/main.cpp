#include <iostream>

int main()
{
	std::string	brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "String Address = " << &brain << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "stringREF = " << &stringREF << std::endl;

	std::cout << "String = " << brain << std::endl;
	std::cout << "stringPTR Address = " << *stringPTR << std::endl;
	std::cout << "stringREF Address = " << stringREF << std::endl;
}
