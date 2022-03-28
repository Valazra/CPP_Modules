#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public :
		Zombie(void);
		Zombie(std::string const name);
		~Zombie(void);
		void announce(void) const;

	private :
		std::string _name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
