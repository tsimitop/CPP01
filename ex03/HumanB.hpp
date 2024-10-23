#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* _weapon;
	std::string _name;
public:
	void	setWeapon(Weapon& weapon);
	void	attack();
	HumanB(std::string name);
	~HumanB();
};

#endif