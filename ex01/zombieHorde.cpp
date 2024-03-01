/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:41:47 by bcopoglu          #+#    #+#             */
/*   Updated: 2024/03/01 12:51:35 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N == 0)
		return (0);
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
	}
	return (zombie);
}
