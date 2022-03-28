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
		int	getGuardGate(void) const;
		void	setGuardGate(int const activated);

	private :
		int	_Guard_gate_on;
		void	guardGate(void);
		
};

#endif
