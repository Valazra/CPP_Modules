#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & rhs);		

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;
		void		setName(std::string const name);
		void		setHitPoints(int const hitPoints);
		void		setEnergyPoints(int const energyPoints);
		void		setAttackDamage(int const attackDamage);

	protected :
		std::string	_Name;
		int		_Hit_points;
		int		_Energy_points;
		int		_Attack_damage;
};

#endif
