/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:50:20 by bcopoglu          #+#    #+#             */
/*   Updated: 2024/03/01 18:00:28 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

const std::string& Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(const std::string type)
{
	this->type = type;
}
