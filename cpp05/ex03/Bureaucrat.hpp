#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public :



		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string	getName(void) const;
		int		getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(AForm & f);
		void		executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("Bureaucrat : Exception : Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("Bureaucrat : Exception : Grade too low");
				}
		};

	private :
		std::string const 	_name;
		int			_grade;
};

std::ostream & operator<<(std::ostream & lhs, Bureaucrat const & rhs);

#endif
