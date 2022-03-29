#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack(const std::string& target);
		void	guardGate(void);
		bool	getGuardGate(void) const;
		void	setGuardGate(bool const activated);

	protected :
		bool	_Guard_gate_on;
		
};

#endif
