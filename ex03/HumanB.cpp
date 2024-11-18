#include "HumanB.hpp"
#include <iostream>

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " viciously attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " han no weapon to attack.\n";
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	// std::cout << this->_name << " has been created.\n";
}

HumanB::~HumanB()
{
	std::cout << this->_name << ": You win! I've been destroyed!!!\n";
}
