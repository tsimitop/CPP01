#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	const std::string	*getType();
	void				setType();
	Weapon(/* args */);
	~Weapon();
};

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

#endif