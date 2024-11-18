#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack(void)
{
	std::cout << this->_name << " viciously attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	// std::cout << this->_name << " has been created.\n";
}

HumanA::~HumanA()
{
	std::cout << this->_name << ": Oh, no! What's happening to me? I thought I won!? NOOOoo...\n";
}
