/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:13:48 by bcopoglu          #+#    #+#             */
/*   Updated: 2024/03/07 21:19:27 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_weapon;
		std::string name;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &_weapon);
		~HumanB();
		void	setName(const std::string name);
		void	setWeapon(const Weapon &_weapon);
		const std::string	&getName(void) const;
		const Weapon	*getWeapon(void) const;

		void	attack(void);
};

#endif
