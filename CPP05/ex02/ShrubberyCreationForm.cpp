/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:02:29 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 12:55:38 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137), _target("defaut")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreation", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Cannot copy name, and grades" << std::endl;
	_target = rhs.getTarget();
	this->setSigned(rhs.getSigned());
	return (*this);
}

std::string const &	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

/*const char	*ShrubberyCreationForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char	*ShrubberyCreationForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}*/

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
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
