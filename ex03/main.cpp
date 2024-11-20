#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#define BRIGHT_MAGENTA	"\033[95m"	// Bright magenta (light magenta)
#define CYAN			"\033[36m"	// Cyan
#define GREY			"\033[90m"	// Grey (bright black text)
#define RESET			"\033[0m"	// Reset to default color

int main()
{
	std::cout << BRIGHT_MAGENTA;
	Weapon aClub = Weapon("crude spiked club");
	// Weapon redundantClub = Weapon("unreachable club");
	HumanA bob("Bob", aClub);
	bob.attack();
	aClub.setType("shillelagh");
	bob.attack();

	std::cout << CYAN;
	Weapon bClub = Weapon("crude spiked club");
	// Weapon differentClub = Weapon("new club");
	HumanB jim("Jim");
	jim.setWeapon(bClub);
	jim.attack();
	bClub.setType("gunstock war club");
	jim.attack();
	// jim.setWeapon(differentClub);
	// jim.attack();
	std::cout << GREY;

	return (0);
}
