#include "Zombie.hpp"

int	main(void)
{
	randomChump("HeapZombie");
	Zombie* s_z = newZombie("StackZombie");
	s_z->announce();
	delete(s_z);
	return (0);
}