#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void 	setName(std::string name);
	void	announce(void);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif