#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Anonymous"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		_grade = 150;
		std::cout << "Grade 150 assignated." << std::endl;
		return ;
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
	this->_grade = src.getGrade();
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	_grade = rhs.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void		Bureaucrat::incrementGrade(void)
{
	try
	{
		if (_grade <= 1) 
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "No incrementation have been done." << std::endl;
		return ;
	}
	_grade--;
	std::cout << _name << " grade incremented." << std::endl;
	return ;
}

void		Bureaucrat::decrementGrade(void)
{
	try
	{
		if (_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "No decrementation have been done." << std::endl;
		return ;
	}
	_grade++;
	std::cout << _name << " grade decremented" << std::endl;
	return ;
}

void		Bureaucrat::signForm(AForm & formulaire)
{
	try
	{
		formulaire.beSigned(*this);
		std::cout << _name << " signed " << formulaire.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cout << _name << " couldn't sign " << formulaire.getName() << " because " << e.what() << std::endl;
	}
	return ;
}

void		Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " has executed " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " couldn't execute form because : " << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & lhs, Bureaucrat const & rhs)
{
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (lhs);
}
