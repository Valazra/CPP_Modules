#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern & operator=(Intern const & src);

		AForm*	makeForm(std::string const form_name, std::string form_target);

		class FormDoesntExist : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("Intern : Exception : Form doesn't exist.");
				}
		};
};

#endif
