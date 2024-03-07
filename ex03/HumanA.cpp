/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:52:31 by bcopoglu          #+#    #+#             */
/*   Updated: 2024/03/07 21:28:27 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
