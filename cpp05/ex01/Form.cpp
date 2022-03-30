#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _signed(false), _grade_sign(150), _grade_exec(150)
{
	return ;
}

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & src) : _name(src.getName()), _signed(src.getSigned()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec())
{
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
	if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	return ;
}


Form & Form::operator=(Form const & rhs)
{
	_signed = rhs.getSigned();
	return (*this);
}


std::string	Form::getName(void) const
{
	return (_name);
}

bool		Form::getSigned(void) const
{
	return (_signed);
}

int		Form::getGradeSign(void) const
{
	return (_grade_sign);
}

int		Form::getGradeExec(void) const
{
	return (_grade_exec);
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_sign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
	return ;
}

std::ostream & operator<<(std::ostream & lhs, Form const & rhs)
{
	lhs << "Form name : " << rhs.getName() << " | Is signed : " << rhs.getSigned() <<" | Grade sign : " << rhs.getGradeSign() << " | Grade exec : " << rhs.getGradeExec() << std::endl;
	return (lhs);
}
