#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	&_weapon;
		std::string name;

	public:
		HumanA(std::string name, Weapon &_weapon);
		~HumanA();
		void	setWeapon(const Weapon &_weapon);
		void	setName(const std::string name);
		const std::string&	getName() const;
		const	Weapon&		getWeapon() const;

		void	attack(void) const;
};

#endif

