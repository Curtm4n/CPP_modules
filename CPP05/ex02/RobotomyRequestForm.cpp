/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:02:29 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 20:58:21 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45), _target("defaut")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequest", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm parameter constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Cannot copy name, and grades" << std::endl;
	_target = rhs.getTarget();
	this->setSigned(rhs.getSigned());
	return (*this);
}

std::string const &	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	i;

	srand((unsigned)time(0));
	i = rand() % 2;
	this->checkRequirement(executor);
	std::cout << "* Make some drilling noises *" << std::endl;
	if (i)
		std::cout << this->getTarget() << " has been robotomized successfully"
			<< std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;

}


std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs)
{
	std::string	sign;

	if (rhs.getSigned())
		sign = " signed";
	else
		sign = " not signed";
	o << "Form " << rhs.getName() << sign << ", grade to sign: "
		<< rhs.getGradeSigned() << ", grade to execute: " << rhs.getGradeExec();
	return (o);
}
