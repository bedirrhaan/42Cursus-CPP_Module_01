#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
	std::cout << "Destructor is called" << std::endl;
}

const std::string& Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(const std::string type)
{
	this->type = type;
}
