#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
		void	setGuardGate(bool activated);

	private :
		bool	_Guard_gate_on;
		
};

#endif
