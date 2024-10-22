#include "Zombie.hpp"

int	main(void)
{
	int			N = 4;
	std::string	name = "Norbert";

	if (N <= 0)
		std::cout << "No allocation required. Exiting program." << std::endl;
	else
	{
		Zombie *zombiePtr =	zombieHorde(N, name);
		for (int i = 0; i < N; i++)
			zombiePtr[i].announce();
		std::cout << "De-allocating " << N << " Zombies." << std::endl;
		delete [] zombiePtr;
	}
	return (0);
}