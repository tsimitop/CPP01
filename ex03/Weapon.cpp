#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType() const
{
	return (this->_type);
}

Weapon::Weapon(std::string type) : _type(type)
{
	// std::cout << "Weapon created: " << this->_type << std::endl;
}

Weapon::~Weapon()
{
	// std::cout << "Weapon destroyed: " << this->_type << std::endl;
}

