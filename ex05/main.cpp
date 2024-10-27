#include "Harl.hpp"

int	main(void)
{
	Harl complaints;
	std::string line;
	std::cout << "Type the type of complaint (one acceptable per time):\t[DEBUG] [INFO] [WARNING] [ERROR]" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line == "DEBUG" || line == "INFO" || line == "WARNING" || line == "ERROR")
			complaints.complain(line);
		else if (line.empty())
			std::cout << "Please provide input!" << std::endl;
		else
			std::cout << "Invalid option." << std::endl;
	}
	return (0);
}
