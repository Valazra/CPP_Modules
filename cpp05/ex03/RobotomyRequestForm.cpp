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
	srand(time(NULL));
	std::cout << "* VRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR *" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << this->_target << " failed to be robotomized." << std::endl;
}
