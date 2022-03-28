#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & rhs);

		std::string getType(void) const;

// ici on enleve le virtual pour que le wrongCat prenne cette fonction au lieu de la sienne
		void makeSound() const;

	protected :
		std::string _type;
};

#endif
