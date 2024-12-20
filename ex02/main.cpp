#include <iostream>

int	main(void)
{
	//THE PROGRAM CONTAINS
	std::string		stringVAR;			//A string variable initialized to "HI THIS IS BRAIN".
	stringVAR = "HI THIS IS BRAIN";

	std::string		*stringPTR;			//A pointer to the string.
	stringPTR = &stringVAR;

	std::string&	stringREF = stringVAR;	//A reference to the string.

	//THE PROGRAM PRINTS
	std::cout<< std::endl;
	std::cout << "The memory address of the stringVAR is :\t" << &stringVAR << std::endl;
	std::cout << "The memory address held by stringPTR is :\t" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is :\t" << &stringREF << std::endl;

	//VALUES
	std::cout<< std::endl;
	std::cout << "The value of the stringVAR is :\t\t" << stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR is :\t" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is :\t" << stringREF << std::endl;

	return (0);
}