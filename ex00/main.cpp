#include "Zombie.hpp"

int	main()
{
	Zombie* heapZombie = newZombie("Heap Zombie");
	heapZombie->announce();
	delete heapZombie;
	std::cout << "************" << std::endl;
	randomChump("Stack Zombie");
}