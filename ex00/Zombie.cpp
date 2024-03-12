#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	setName(name);
}

Zombie::~Zombie()
{
	std::cout << getName() << " is dead" << std::endl;
}

std::string Zombie::getName()
{
	return (this->name);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
