#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	setWeapon(_weapon);
	setName(name);
}
HumanA::~HumanA()
{
	std::cout << "HumanA Destructor called" << std::endl;
}

void	HumanA::setWeapon(const Weapon &_weapon)
{
	this->_weapon = _weapon;
}

const	Weapon&	HumanA::getWeapon() const
{
	return (this->_weapon);
}

void	HumanA::setName(const std::string name)
{
	this->name = name;
}

const std::string& HumanA::getName(void) const
{
	return (this->name);
}

void	HumanA::attack(void) const
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}
