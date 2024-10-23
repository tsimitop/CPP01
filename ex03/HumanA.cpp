#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack(void)
{
	std::cout << this->_name << " viciously attacks with their " << *(this->_weapon.getType()) << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
	std::cout << this->_name << ": Oh, no! What's happening to me? I though I won!? NOOOoo..." << std::endl;
}
