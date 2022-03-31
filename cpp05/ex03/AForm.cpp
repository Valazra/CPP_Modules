#include "AForm.hpp"

AForm::AForm(void) : _name("Default AForm"), _signed(false), _grade_sign(150), _grade_exec(150)
{
	return ;
}

AForm::AForm(std::string name, int grade_sign, int grade_exec) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw AForm::GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const & src) : _name(src.getName()), _signed(src.getSigned()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec())
{
	if (_grade_sign < 1 || _grade_exec < 1)
		throw AForm::GradeTooHighException();
	if (_grade_sign > 150 || _grade_exec > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::~AForm(void)
{
	return ;
}


AForm & AForm::operator=(AForm const & rhs)
{
	_signed = rhs.getSigned();
	return (*this);
}


std::string	AForm::getName(void) const
{
	return (_name);
}

bool		AForm::getSigned(void) const
{
	return (_signed);
}

int		AForm::getGradeSign(void) const
{
	return (_grade_sign);
}

int		AForm::getGradeExec(void) const
{
	return (_grade_exec);
}

void		AForm::setSigned(bool const & sign)
{
	this->_signed = sign;
	return ;
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_sign)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
	return ;
}

void	AForm::checkBeforeExecute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
		throw AForm::AFormUnsignedException();
	if (this->_grade_exec < executor.getGrade())
		throw AForm::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & lhs, AForm const & rhs)
{
	lhs << "AForm name : " << rhs.getName() << " | Is signed : " << rhs.getSigned() <<" | Grade sign : " << rhs.getGradeSign() << " | Grade exec : " << rhs.getGradeExec() << std::endl;
	return (lhs);
}
