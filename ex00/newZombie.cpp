#include  "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *zombiez =  new Zombie(name);
	return (zombiez);
}
