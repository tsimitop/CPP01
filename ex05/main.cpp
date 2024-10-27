#include "Harl.hpp"

int	main(void)
{
	Harl complaints;

	//Proper complaints
	complaints.complain("DEBUG");
	complaints.complain("INFO");
	complaints.complain("WARNING");
	complaints.complain("ERROR");

	//Not included complaint
	complaints.complain("random");

	return (0);
}
