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
