/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:13:41 by bcopoglu          #+#    #+#             */
/*   Updated: 2024/03/07 21:26:35 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	setName(name);
}

HumanB::HumanB(std::string name, Weapon &_weapon)
{
	setWeapon(_weapon);
	setName(name);
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::setName(const std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(const Weapon &_weapon)
{
	this->_weapon = (Weapon *)&_weapon;
}

const	std::string &HumanB::getName(void) const
{
	return (this->name);
}

const	Weapon	*HumanB::getWeapon(void) const
{
	return (this->_weapon);
}

void	HumanB::attack(void)
{
	std::cout << getName() << " attacks with their " << getWeapon()->getType() << std::endl;
}
