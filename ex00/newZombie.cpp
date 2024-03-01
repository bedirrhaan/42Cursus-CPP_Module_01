/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:10:38 by bcopoglu          #+#    #+#             */
/*   Updated: 2024/03/01 12:32:25 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *zombiez =  new Zombie(name);
	return (zombiez);
}
