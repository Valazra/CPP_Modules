#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("Default target")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	this->setSigned(src.getSigned());
	this->_target = src.getTarget();
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->setSigned(rhs.getSigned());
	this->_target = rhs.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkBeforeExecute(executor);
	std::cout << "test2" << std::endl;
}
