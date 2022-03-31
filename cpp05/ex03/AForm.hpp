#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>
# include <cstdlib>

class Bureaucrat;

class AForm
{
	public :
		AForm(void);
		AForm(std::string name, int grade_sign, int grade_exec);
		AForm(AForm const & src);
		virtual ~AForm(void);

		AForm & operator=(AForm const & rhs);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int		getGradeSign(void) const;
		int		getGradeExec(void) const;
		void		setSigned(bool const & sign);
		void 		beSigned(Bureaucrat const & bureaucrat);
		void		checkBeforeExecute(Bureaucrat const & executor) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("AForm : Exception : Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("AForm : Exception : Grade too low");
				}
		};

		class AFormUnsignedException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("AForm : Exception : Unsigned form.");
				}
		};

		class FailToOpen : public std::exception
		{
			public : 
				virtual const char* what(void) const throw()
				{
					return ("AForm : Exception : Fail to open");
				}
		};

	private :
		std::string const	_name;
		bool			_signed;
		int const		_grade_sign;
		int const		_grade_exec;
};

std::ostream & operator<<(std::ostream & lhs, AForm const & rhs);

#endif
