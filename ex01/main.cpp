/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:50:59 by bcopoglu          #+#    #+#             */
/*   Updated: 2024/03/01 12:55:32 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int		N = 5;
	Zombie	*zombie = zombieHorde(N, "Bedirhan");

	for (int i = 0; i < N; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
}
