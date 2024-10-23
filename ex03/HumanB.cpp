#include "HumanB.hpp"
#include <iostream>

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " viciously attacks with their " << *(this->_weapon->getType()) << std::endl;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
	std::cout << this->_name << ": You win! I've been destroyed!!!" << std::endl;
}
