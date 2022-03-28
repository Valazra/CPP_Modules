#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	public :
		PhoneBook(void);
		~PhoneBook(void);
		
		int	start(void);

	private :
		Contact	_repertory[8];
};

#endif
