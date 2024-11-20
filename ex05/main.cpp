#include "Harl.hpp"

int	main(void)
{
	Harl	harlComplainalot;

	//Proper complaints
	harlComplainalot.complain("DEBUG");
	harlComplainalot.complain("INFO");
	harlComplainalot.complain("WARNING");
	harlComplainalot.complain("ERROR");

	//Not included complaint
	harlComplainalot.complain("random");

	return (0);
}
