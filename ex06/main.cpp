#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	complaints;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return (0);
	}
	complaints.complain(argv[1]);
	return (0);
}
