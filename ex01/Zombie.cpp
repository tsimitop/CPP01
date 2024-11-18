#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "Hello, I am " << this->name << " and I love BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	// std::cout << this->name << " has been created." << std::endl;
}

Zombie::~Zombie()
{
	// std::cout << this->name << " has been destroyed." << std::endl;
}
