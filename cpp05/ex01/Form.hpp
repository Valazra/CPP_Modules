#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :
		Form(void);
		Form(std::string name, int grade_sign, int grade_exec);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int		getGradeSign(void) const;
		int		getGradeExec(void) const;
		void 		beSigned(Bureaucrat const & bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("Form : Exception : Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("Form : Exception : Grade too low");
				}
		};

	private :
		std::string const	_name;
		bool			_signed;
		int const		_grade_sign;
		int const		_grade_exec;
};

std::ostream & operator<<(std::ostream & lhs, Form const & rhs);

#endif
