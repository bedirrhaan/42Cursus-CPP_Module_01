#include "Zombie.hpp"

int main()
{
	Zombie *cemil = newZombie("Cemil");
	randomChump("Bedirhan");

	cemil->announce();
	delete cemil;
}
