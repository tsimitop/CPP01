#include "Zombie.hpp"

int	main(void)
{
	randomChump("HeapZombie");
	Zombie* stack_zombie = newZombie("StackZombie");

	stack_zombie->announce();
	delete(stack_zombie);
	return (0);
}