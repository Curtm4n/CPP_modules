/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:02:29 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 12:53:49 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5), _target("defaut")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardon", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src), _target(src.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	//*this = src; //normalement inutile
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Cannot copy name, and grades" << std::endl;
	_target = rhs.getTarget();
	this->setSigned(rhs.getSigned());
	return (*this);
}

std::string const &	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

/*const char	*PresidentialPardonForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char	*PresidentialPardonForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}*/

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & rhs)
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
